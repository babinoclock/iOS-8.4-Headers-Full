/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLContainerRelation;

@interface CPLContainerRelationChange : CPLRecordChange {

	NSString* _itemIdentifier;
	CPLContainerRelation* _relation;

}

@property (nonatomic,copy) NSString * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) CPLContainerRelation * relation;              //@synthesize relation=_relation - In the implementation block
+(id)relationToContainerWithIdentifier:(id)arg1 ;
+(id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)description;
-(CPLContainerRelation *)relation;
-(id)identifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(void)setRelation:(CPLContainerRelation *)arg1 ;
-(id)secondaryIdentifier;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(char)arg2 usingClientCache:(id)arg3 ;
-(NSString *)itemIdentifier;
@end
