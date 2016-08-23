//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTSearchEngine : NSObject
{
    NSString *_searchDirectory;
    CDUnknownBlockType _logBlock;
    unsigned long long _logLevel;
    struct Searcher *_searcher;
}

+ (void)loggerWithLevel:(unsigned long long)arg1 format:(id)arg2;
@property(nonatomic) struct Searcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(copy, nonatomic) NSString *searchDirectory; // @synthesize searchDirectory=_searchDirectory;
- (void).cxx_destruct;
- (basic_string_7c0a1c0b)cStringWithNSString:(id)arg1;
- (id)duplicateRemovalWithOriginalArray:(id)arg1;
- (id)searchWithQuery:(id)arg1;
- (_Bool)isValidDatabase:(id)arg1;
- (void)cleanWithIndexName:(id)arg1;
- (void)clean;
- (void)close;
- (void)removeDBConnection:(id)arg1;
- (void)stop;
- (void)scanWithComplete:(CDUnknownBlockType)arg1;
- (void)scan;
- (void)setDBConnection:(id)arg1;
- (void)addSearchIndexSource:(id)arg1;
- (void)addSearchIndex:(id)arg1;
- (void)open;
- (id)init;
- (void)dealloc;

@end
