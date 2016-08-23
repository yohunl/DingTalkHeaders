//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface LWUPStatisData : NSObject
{
    _Bool _cached;
    NSURL *_requestURL;
    NSURL *_mainDocumentURL;
    NSString *_MIMEType;
    long long _responseDataLength;
}

@property(nonatomic) _Bool cached; // @synthesize cached=_cached;
@property(nonatomic) long long responseDataLength; // @synthesize responseDataLength=_responseDataLength;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(copy, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
