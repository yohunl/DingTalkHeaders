//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTAttachmentUtil : NSObject
{
}

+ (void)getFileInfoWithFilePath:(id)arg1 inSendBox:(_Bool)arg2 fileName:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)getServerThumbUrlWithMediaId:(id)arg1;
+ (_Bool)isStandByFileType:(id)arg1;
+ (id)filePreViewIconWithFileType:(id)arg1;
+ (id)formatTimeDuration:(double)arg1;
+ (id)unitWithFileSize:(long long)arg1;
+ (id)fileSizeStringWithFileSize:(unsigned long long)arg1;
+ (id)fileIconWithFileType:(id)arg1;

@end
