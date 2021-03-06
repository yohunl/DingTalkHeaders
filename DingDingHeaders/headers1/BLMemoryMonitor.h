//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, UITextView, UIView;

@interface BLMemoryMonitor : NSObject
{
    _Bool working;
    NSTimer *tickTimer;
    UITextView *infoText;
    UIView *topWindow;
    unsigned long long freeMemory;
    long long showMemoryWarning;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool working; // @synthesize working;
- (void).cxx_destruct;
- (void)onMemoryWarning;
- (void)stopMonitor;
- (void)startMonitor;
- (void)onTick;
- (void)dealloc;

@end

