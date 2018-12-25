//
//  JKRSATool.h
//  JKEncryptionDemo
//
//  Created by 王冲 on 2018/12/25.
//  Copyright © 2018年 JK科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKRSATool : NSObject

#pragma mark 1.1、加密：通过'.der'格式的公钥文件路径来加密
/**
 加密方法

 @param str 需要加密的字符串
 @param path '.der'格式的公钥文件路径
 @return 返回加密后的字符串
 */
+ (NSString *)encryptString:(NSString *)str publicKeyWithContentsOfFile:(NSString *)path;

#pragma mark 1.2、解密：通过 '.p12'格式的私钥文件路径 来解密
/**
 解密方法

 @param str 需要解密的字符串
 @param path '.p12'格式的私钥文件路径
 @param password 私钥文件密码
 @return 返回解密后的字符串
 */
+ (NSString *)decryptString:(NSString *)str privateKeyWithContentsOfFile:(NSString *)path password:(NSString *)password;

#pragma mark 2.1、加密： 通过 公钥字符串 来加密
/**
 加密方法

 @param str 需要加密的字符串
 @param pubKey 公钥字符串
 @return 返回加密后的字符串
 */
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;

#pragma mark 2.2、解密：通过 私钥字符串 来解密
/**
 解密方法

 @param str  需要解密的字符串
 @param privKey 私钥字符串
 @return 返回解密后的字符串
 */
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;

@end

NS_ASSUME_NONNULL_END
