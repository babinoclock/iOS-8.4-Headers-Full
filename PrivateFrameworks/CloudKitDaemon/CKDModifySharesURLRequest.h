/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableDictionary, NSArray;

@interface CKDModifySharesURLRequest : CKDURLRequest {

	/*^block*/id _shareModifiedBlock;
	NSMutableDictionary* _sharesToSaveByID;
	NSArray* _sharesToDelete;
	NSMutableDictionary* _shareIDByRequestID;
	NSMutableDictionary* _participantIDByRequestID;

}

@property (nonatomic,copy) id shareModifiedBlock;                                         //@synthesize shareModifiedBlock=_shareModifiedBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sharesToSaveByID;                      //@synthesize sharesToSaveByID=_sharesToSaveByID - In the implementation block
@property (nonatomic,retain) NSArray * sharesToDelete;                                    //@synthesize sharesToDelete=_sharesToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareIDByRequestID;                    //@synthesize shareIDByRequestID=_shareIDByRequestID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * participantIDByRequestID;              //@synthesize participantIDByRequestID=_participantIDByRequestID - In the implementation block
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSMutableDictionary *)sharesToSaveByID;
-(NSArray *)sharesToDelete;
-(NSMutableDictionary *)shareIDByRequestID;
-(id)shareModifiedBlock;
-(id)initWithSharesToSave:(id)arg1 sharesToDelete:(id)arg2 ;
-(void)setShareModifiedBlock:(id)arg1 ;
-(void)setSharesToSaveByID:(NSMutableDictionary *)arg1 ;
-(void)setSharesToDelete:(NSArray *)arg1 ;
-(void)setShareIDByRequestID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)participantIDByRequestID;
-(void)setParticipantIDByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
@end

