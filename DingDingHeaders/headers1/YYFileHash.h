//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface YYFileHash : NSObject
{
    unsigned int _crc32;
    unsigned int _adler32;
    unsigned long long _types;
    NSString *_md2String;
    NSString *_md4String;
    NSString *_md5String;
    NSString *_sha1String;
    NSString *_sha224String;
    NSString *_sha256String;
    NSString *_sha384String;
    NSString *_sha512String;
    NSString *_crc32String;
    NSString *_adler32String;
    NSData *_md2Data;
    NSData *_md4Data;
    NSData *_md5Data;
    NSData *_sha1Data;
    NSData *_sha224Data;
    NSData *_sha256Data;
    NSData *_sha384Data;
    NSData *_sha512Data;
}

+ (id)hashForFile:(id)arg1 types:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)hashForFile:(id)arg1 types:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned int adler32; // @synthesize adler32=_adler32;
@property(readonly, nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
@property(readonly, nonatomic) NSData *sha512Data; // @synthesize sha512Data=_sha512Data;
@property(readonly, nonatomic) NSData *sha384Data; // @synthesize sha384Data=_sha384Data;
@property(readonly, nonatomic) NSData *sha256Data; // @synthesize sha256Data=_sha256Data;
@property(readonly, nonatomic) NSData *sha224Data; // @synthesize sha224Data=_sha224Data;
@property(readonly, nonatomic) NSData *sha1Data; // @synthesize sha1Data=_sha1Data;
@property(readonly, nonatomic) NSData *md5Data; // @synthesize md5Data=_md5Data;
@property(readonly, nonatomic) NSData *md4Data; // @synthesize md4Data=_md4Data;
@property(readonly, nonatomic) NSData *md2Data; // @synthesize md2Data=_md2Data;
@property(readonly, nonatomic) NSString *adler32String; // @synthesize adler32String=_adler32String;
@property(readonly, nonatomic) NSString *crc32String; // @synthesize crc32String=_crc32String;
@property(readonly, nonatomic) NSString *sha512String; // @synthesize sha512String=_sha512String;
@property(readonly, nonatomic) NSString *sha384String; // @synthesize sha384String=_sha384String;
@property(readonly, nonatomic) NSString *sha256String; // @synthesize sha256String=_sha256String;
@property(readonly, nonatomic) NSString *sha224String; // @synthesize sha224String=_sha224String;
@property(readonly, nonatomic) NSString *sha1String; // @synthesize sha1String=_sha1String;
@property(readonly, nonatomic) NSString *md5String; // @synthesize md5String=_md5String;
@property(readonly, nonatomic) NSString *md4String; // @synthesize md4String=_md4String;
@property(readonly, nonatomic) NSString *md2String; // @synthesize md2String=_md2String;
@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
- (void).cxx_destruct;

@end
