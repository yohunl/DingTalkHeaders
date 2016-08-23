//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURLRequest, UIWebView, WBSDKWebViewErrorView, WBSDKWebViewProgressView;
@protocol WBSDKWebViewDelegate;

@interface WBSDKWebView : UIView <UIWebViewDelegate>
{
    id <WBSDKWebViewDelegate> _delegate;
    UIWebView *_internalWebView;
    WBSDKWebViewProgressView *_progressView;
    WBSDKWebViewErrorView *_errorView;
}

@property(retain, nonatomic) WBSDKWebViewErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) WBSDKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIWebView *internalWebView; // @synthesize internalWebView=_internalWebView;
@property(nonatomic) __weak id <WBSDKWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deviceOrientationDidChange:(id)arg1;
- (_Bool)isLandscape:(id)arg1;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)errorViewRetryButtonPressed:(id)arg1;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)reload;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
