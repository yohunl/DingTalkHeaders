//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

#import "TBSDKConnectionQueue-Protocol.h"

@class NSDictionary, NSString;

@interface TBSDKConnectionQueue : NSOperationQueue <TBSDKConnectionQueue>
{
}

- (void)go;
- (void)setSuspended:(_Bool)arg1;

// Remaining properties
@property unsigned long long bytesDownloadedSoFar;
@property unsigned long long bytesUploadedSoFar;
@property(readonly, copy) NSString *debugDescription;
@property id delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic, setter=setDownloadProgressDelegate:) id downloadProgressDelegate;
@property(readonly) unsigned long long hash;
@property SEL queueDidFinishSelector;
@property SEL requestDidFailSelector;
@property SEL requestDidFinishSelector;
@property SEL requestDidReceiveResponseHeadersSelector;
@property SEL requestDidStartSelector;
@property SEL requestWillRedirectSelector;
@property(readonly) int requestsCount;
@property _Bool shouldCancelAllRequestsOnFailure;
@property _Bool showAccurateProgress;
@property(readonly) Class superclass;
@property unsigned long long totalBytesToDownload;
@property unsigned long long totalBytesToUpload;
@property(nonatomic, setter=setUploadProgressDelegate:) id uploadProgressDelegate;
@property(retain) NSDictionary *userInfo;

@end

