//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UTISubmoduleHelper : NSObject
{
    _Bool mSubModuleSwitchOn;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property _Bool mSubModuleSwitchOn; // @synthesize mSubModuleSwitchOn;
- (id)getAppKey;
- (void)turnOnSubmodule;
- (void)setSDKVersion:(id)arg1;
- (void)onCrashOccur;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

