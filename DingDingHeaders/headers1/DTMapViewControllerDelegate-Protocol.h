//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTMapPOI, DTMapViewController, NSError;

@protocol DTMapViewControllerDelegate <NSObject>
- (void)mapViewController:(DTMapViewController *)arg1 didUpdatePOI:(DTMapPOI *)arg2;

@optional
- (void)mapViewControllerDidCancel:(DTMapViewController *)arg1;
- (void)mapViewController:(DTMapViewController *)arg1 didFailWithCode:(long long)arg2 error:(NSError *)arg3;
@end
