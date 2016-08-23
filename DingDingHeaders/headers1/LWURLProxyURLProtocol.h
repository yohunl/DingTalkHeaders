//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class LWUPResponse, LWUPWeakRequest, LWUPWeakResponse, NSMutableURLRequest, NSString;

@interface LWURLProxyURLProtocol : NSURLProtocol
{
    LWUPResponse *_proxyResponse;
    LWUPWeakResponse *_wResponse;
    NSMutableURLRequest *_correctedRequest;
    LWUPWeakRequest *_wRequest;
    NSString *_requIdentifier;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(copy, nonatomic) NSString *requIdentifier; // @synthesize requIdentifier=_requIdentifier;
@property(retain, nonatomic) LWUPWeakRequest *wRequest; // @synthesize wRequest=_wRequest;
@property(retain, nonatomic) NSMutableURLRequest *correctedRequest; // @synthesize correctedRequest=_correctedRequest;
@property(retain, nonatomic) LWUPWeakResponse *wResponse; // @synthesize wResponse=_wResponse;
@property(retain, nonatomic) LWUPResponse *proxyResponse; // @synthesize proxyResponse=_proxyResponse;
- (void).cxx_destruct;
- (id)proxy_md5_16_string:(id)arg1;
- (id)identifierForRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)dealloc;

@end
