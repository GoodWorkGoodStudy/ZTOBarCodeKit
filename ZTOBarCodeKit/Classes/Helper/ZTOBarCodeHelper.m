//
//  ZTOBarCodeHelper.m
//  NTBuildOC
//
//  Created by zto_yhd on 2020/5/6.
//  Copyright © 2020 WeChat. All rights reserved.
//

#import "ZTOBarCodeHelper.h"
#import "UIImage+BarCodeKit.h"
#import "BarCodeKit.h"


DEFINE_ENUM(ZTOBarCodeType, BAR_DIRECTION)

@implementation ZTOBarCodeHelper

+ (UIImage *)creatBarCodeWithContent:(NSString *)content type:(ZTOBarCodeType)type{
    return [self creatBarCodeWithContent:content type:type scale:1.0];
}

+ (UIImage *)creatBarCodeWithContent:(NSString *)content type:(ZTOBarCodeType)type scale:(CGFloat)scale{
    return [self creatBarCodeWithContent:content type:type scale:scale height:40];
}

+ (UIImage *)creatBarCodeWithContent:(NSString *)content type:(ZTOBarCodeType)type scale:(CGFloat)scale height:(CGFloat)height {
    NSDictionary *options = @{BCKCodeDrawingBarScaleOption: @(scale),
                            BCKCodeDrawingPrintCaptionOption: @(NO),
                            BCKCodeDrawingBackgroundColorOption: [UIColor whiteColor],
                            BCKCodeDrawingSizeHeightOption: @(height),
    };
    
    NSError *error;
    NSString *enumName = NSStringFromZTOBarCodeType(type);
    NSString *className = @"";
    if (enumName.length >= 3) {
        className = [enumName stringByReplacingCharactersInRange:NSMakeRange(0, 3) withString:@"BCK"];
    }
    BCKCode *barcodeObject = [[NSClassFromString(className) alloc] initWithContent:content error:&error];
    
    if (barcodeObject){
        return [UIImage imageWithBarCode:barcodeObject options:options];
    }else{
        return nil;
    }
}





@end
