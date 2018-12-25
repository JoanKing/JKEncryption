//
//  NSString+JK_Base64.h
//  JKEncryptionDemo
//
//  Created by 王冲 on 2018/12/25.
//  Copyright © 2018年 JK科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JK_Base64)

/**
 原理：1> ASCII码是8个二进制位一编码
      2> Base64编码是6个二进制位一编码,所以转换成字符串后会比ASCII内容要多
 
 */

// base64 编码
- (NSString *)jk_encodedbase64String;
// base64 解码
- (NSString *)jk_decodedbase64String;

// base64 编码
+(NSString *)jk_encodedbase64String:(NSString *)encodedString;
// base64 解码
+(NSString *)jk_decodedbase64String:(NSString *)decodedString;

// 根据NSData生成Base64编码的String
+ (NSString*)encodeBase64Data:(NSData *)data;
// NSData生成未编码的NSString
+ (NSString*)decodeBase64Data:(NSData *)data;


@end

NS_ASSUME_NONNULL_END
