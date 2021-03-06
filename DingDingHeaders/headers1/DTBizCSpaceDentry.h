//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTBizCSpaceDentry : OpenModel <OpenModelProtocol>
{
    _Bool _autoRename;
    unsigned long long _primaryKey;
    NSString *_itemId;
    long long _size;
    NSString *_path;
    NSString *_name;
    NSString *_type;
    NSString *_contentType;
    NSString *_extension;
    double _createTime;
    NSString *_creatorUid;
    long long _creatorSite;
    NSString *_modifierUid;
    long long _modifierSite;
    double _modifiedTime;
    NSString *_version;
    double _expireTime;
    NSString *_thumbnailUrl;
    NSString *_parentPath;
    NSString *_parentId;
    long long _spaceId;
    long long _uploadedSize;
    NSString *_uploadId;
    long long _uploadStatus;
    NSString *_uploadStoreUrl;
    NSString *_extendInfo;
    long long _downloadedSize;
    long long _downloadStatus;
    NSString *_sortKey;
    long long _dirty;
    NSString *_uuid;
    NSString *_extDictStr;
}

+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *extDictStr; // @synthesize extDictStr=_extDictStr;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long dirty; // @synthesize dirty=_dirty;
@property(copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(copy, nonatomic) NSString *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *uploadStoreUrl; // @synthesize uploadStoreUrl=_uploadStoreUrl;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(nonatomic) long long uploadedSize; // @synthesize uploadedSize=_uploadedSize;
@property(nonatomic) _Bool autoRename; // @synthesize autoRename=_autoRename;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property(copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(nonatomic) long long modifierSite; // @synthesize modifierSite=_modifierSite;
@property(copy, nonatomic) NSString *modifierUid; // @synthesize modifierUid=_modifierUid;
@property(nonatomic) long long creatorSite; // @synthesize creatorSite=_creatorSite;
@property(copy, nonatomic) NSString *creatorUid; // @synthesize creatorUid=_creatorUid;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

