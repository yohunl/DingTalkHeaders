//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTMAPage, NSArray, NSMutableArray;

@interface DTMAPageNavigation : NSObject
{
    NSMutableArray *_pages;
    DTMAPage *_rootPage;
    DTMAPage *_topPage;
}

@property(readonly, nonatomic) DTMAPage *topPage; // @synthesize topPage=_topPage;
@property(readonly, nonatomic) DTMAPage *rootPage; // @synthesize rootPage=_rootPage;
- (void).cxx_destruct;
- (void)popPage:(id)arg1;
- (void)pushPage:(id)arg1;
@property(readonly, nonatomic) NSArray *pages;
- (void)dealloc;
- (id)init;

@end

