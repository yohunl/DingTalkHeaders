//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface LAWebViewSetting : NSObject
{
    _Bool _jsBridgeEnabled;
    _Bool _navigationBarEnabled;
    _Bool _webViewScrollEnabled;
    _Bool _mediaPlaybackRequiresUserAction;
    _Bool _webViewZoomEnabled;
    _Bool _progressBarEnabled;
    _Bool _webViewPageSlideEnabled;
    UIColor *_backgroundColor;
    unsigned long long _cachePolicy;
}

+ (id)webViewSettingWithJsBridgeEnable:(_Bool)arg1 navigationBarEnabled:(_Bool)arg2 webViewScrollEnabled:(_Bool)arg3 mediaPlaybackRequiresUserAction:(_Bool)arg4 webViewZoomEnabled:(_Bool)arg5 progressBarEnabled:(_Bool)arg6 webViewPageSlideEnabled:(_Bool)arg7 backgroundColor:(id)arg8 cachePolicy:(unsigned long long)arg9;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool webViewPageSlideEnabled; // @synthesize webViewPageSlideEnabled=_webViewPageSlideEnabled;
@property(nonatomic) _Bool progressBarEnabled; // @synthesize progressBarEnabled=_progressBarEnabled;
@property(nonatomic) _Bool webViewZoomEnabled; // @synthesize webViewZoomEnabled=_webViewZoomEnabled;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool webViewScrollEnabled; // @synthesize webViewScrollEnabled=_webViewScrollEnabled;
@property(nonatomic) _Bool navigationBarEnabled; // @synthesize navigationBarEnabled=_navigationBarEnabled;
@property(nonatomic) _Bool jsBridgeEnabled; // @synthesize jsBridgeEnabled=_jsBridgeEnabled;
- (void).cxx_destruct;
- (void)private_setProgressBarEnabled:(_Bool)arg1;
- (void)private_setCachePolicy:(unsigned long long)arg1;
- (void)private_setwebViewPageSlideEnabled:(_Bool)arg1;
- (id)init;

@end
