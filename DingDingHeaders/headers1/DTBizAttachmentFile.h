//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBizAttachment.h"

@class NSString;

@interface DTBizAttachmentFile : DTBizAttachment
{
    NSString *_mediaId;
    NSString *_fileUrl;
    NSString *_fileName;
    NSString *_fileType;
    long long _fileSize;
}

@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;

@end
