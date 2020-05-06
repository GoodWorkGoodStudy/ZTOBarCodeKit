//
//  ZTOBarCodeHelper.h
//  NTBuildOC
//
//  Created by zto_yhd on 2020/5/6.
//  Copyright © 2020 WeChat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EnumMarcos.h"

NS_ASSUME_NONNULL_BEGIN

#define BAR_DIRECTION(XX) \
XX(ZTOCode128Code, ) \
XX(ZTOCode93Code, ) \
XX(ZTOCode39Code,) \
XX(ZTOCode39CodeModulo43,) \
XX(ZTOCode39FullASCII,) \
XX(ZTOCode39FullASCIIModulo43,) \
XX(ZTOInterleaved2of5Code,) \
XX(ZTOEAN13Code,) \
XX(ZTOEAN8Code,) \
XX(ZTOUPCECode,) \
XX(ZTOCode11Code,) \
XX(ZTOMSICode,) \
XX(ZTOPharmacodeOneTrack,) \
XX(ZTOCodabarCode,) \
XX(ZTOUPCACode,) \
XX(ZTOStandard2of5Code,) \
XX(ZTOFacingIdentificationMarkCode,) \
XX(ZTOEAN2SupplementCode,) \
XX(ZTOEAN5SupplementCode,) \
XX(ZTOISBNCode,) \
XX(ZTOISSNCode,) \
XX(ZTOPOSTNETCode,) \
XX(ZTOISMNCode,) \

DECLARE_ENUM(ZTOBarCodeType, BAR_DIRECTION)

@interface ZTOBarCodeHelper : NSObject

/// 生成条形码
/// @param content 内容
/// @param type 类型
+ (UIImage *)creatBarCodeWithContent:(NSString *)content type:(ZTOBarCodeType)type;

/// 生成条形码
/// @param content 内容
/// @param scale 比例
/// @param type 类型
+ (UIImage *)creatBarCodeWithContent:(NSString *)content type:(ZTOBarCodeType)type scale:(CGFloat)scale;


/// 生成条形码
/// @param content 内容
/// @param type 类型
/// @param scale 比例
/// @param height 高度
+ (UIImage *)creatBarCodeWithContent:(NSString *)content type:(ZTOBarCodeType)type scale:(CGFloat)scale height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
