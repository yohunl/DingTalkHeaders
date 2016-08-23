//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWHttpDNSInterceptor, LWURLCacheInterceptor, LWWebPProcessor;

@interface DTURLInterceptorInit : NSObject
{
    LWHttpDNSInterceptor *_httpDNSInterceptor;
    LWURLCacheInterceptor *_urlCacheInterceptor;
    LWWebPProcessor *_webpProcessor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) LWWebPProcessor *webpProcessor; // @synthesize webpProcessor=_webpProcessor;
@property(retain, nonatomic) LWURLCacheInterceptor *urlCacheInterceptor; // @synthesize urlCacheInterceptor=_urlCacheInterceptor;
@property(retain, nonatomic) LWHttpDNSInterceptor *httpDNSInterceptor; // @synthesize httpDNSInterceptor=_httpDNSInterceptor;
- (void).cxx_destruct;
- (_Bool)isSupportDetailLog;
- (void)configFilteredHosts;
- (id)ipFromHttpDNSByHost:(id)arg1;
- (void)configURLInterceptors;
- (id)customProtocolClasses;

@end
