//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTQuerySyntax, NSString;

@interface DTSearchEngineQuery : NSObject
{
    NSString *_indexName;
    DTQuerySyntax *_querySyntax;
    NSString *_dbName;
    NSString *_tableName;
    struct _NSRange _range;
}

@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(copy, nonatomic) NSString *dbName; // @synthesize dbName=_dbName;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) DTQuerySyntax *querySyntax; // @synthesize querySyntax=_querySyntax;
@property(copy, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (void).cxx_destruct;

@end
