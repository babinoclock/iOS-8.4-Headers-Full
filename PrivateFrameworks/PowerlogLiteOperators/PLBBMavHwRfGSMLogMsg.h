/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSString, NSNumber, NSArray, NSMutableArray, NSMutableDictionary;

@interface PLBBMavHwRfGSMLogMsg : PLBasebandMessage {

	unsigned char _inited;
	NSString* _error;
	NSNumber* _logDuration;
	NSArray* _connState;
	NSString* _groupEntryKey;
	NSString* _groupID;
	NSMutableArray* _groupArrEntries;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (retain) NSString * error;                                        //@synthesize error=_error - In the implementation block
@property (retain) NSNumber * logDuration;                                  //@synthesize logDuration=_logDuration - In the implementation block
@property (retain) NSArray * connState;                                     //@synthesize connState=_connState - In the implementation block
@property (retain) NSString * groupEntryKey;                                //@synthesize groupEntryKey=_groupEntryKey - In the implementation block
@property (retain) NSString * groupID;                                      //@synthesize groupID=_groupID - In the implementation block
@property (retain) NSMutableArray * groupArrEntries;                        //@synthesize groupArrEntries=_groupArrEntries - In the implementation block
@property (assign,nonatomic) unsigned char inited;                          //@synthesize inited=_inited - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)entryEventBackwardDefinitionBBMavHwRfGSM;
-(id)init;
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
-(void)setLogDuration:(NSNumber *)arg1 ;
-(void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3 ;
-(NSNumber *)logDuration;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
-(void)addPairWithKey:(id)arg1 andWithVal:(id)arg2 ;
-(void)populateEntry:(id)arg1 ;
-(unsigned char)inited;
-(void)setInited:(unsigned char)arg1 ;
-(void)refreshRequest;
-(void)setConnState:(NSArray *)arg1 ;
-(id)logEventBackwardBBMavHwRfGSM;
-(NSArray *)connState;
-(NSString *)groupEntryKey;
-(NSMutableArray *)groupArrEntries;
-(void)logEventBackwardGroupEntriesMav10BBHwRfWcdma;
-(void)setGroupEntryKey:(NSString *)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setGroupArrEntries:(NSMutableArray *)arg1 ;
@end

