/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDMMCSGetRequestInfo : PBCodable <NSCopying> {

	long long _duration;
	long long _localBytes;
	long long _resumedBytes;
	long long _startTime;
	long long _timestamp;
	NSMutableArray* _authHttpInfos;
	NSMutableArray* _cancelErrors;
	int _cancelledErrorCode;
	NSString* _cancelledErrorDomain;
	NSString* _clientId;
	NSMutableArray* _completeHttpInfos;
	NSMutableArray* _containerHttpInfos;
	NSMutableArray* _errors;
	int _itemCount;
	int _itemsNeedingChunks;
	int _requestErrorCode;
	NSString* _requestErrorDomain;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasClientId; 
@property (nonatomic,retain) NSString * clientId;                              //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) char hasStartTime; 
@property (assign,nonatomic) long long startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) long long duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) char hasCancelledErrorDomain; 
@property (nonatomic,retain) NSString * cancelledErrorDomain;                  //@synthesize cancelledErrorDomain=_cancelledErrorDomain - In the implementation block
@property (assign,nonatomic) char hasCancelledErrorCode; 
@property (assign,nonatomic) int cancelledErrorCode;                           //@synthesize cancelledErrorCode=_cancelledErrorCode - In the implementation block
@property (nonatomic,readonly) char hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain;                    //@synthesize requestErrorDomain=_requestErrorDomain - In the implementation block
@property (assign,nonatomic) char hasRequestErrorCode; 
@property (assign,nonatomic) int requestErrorCode;                             //@synthesize requestErrorCode=_requestErrorCode - In the implementation block
@property (assign,nonatomic) char hasItemCount; 
@property (assign,nonatomic) int itemCount;                                    //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) char hasItemsNeedingChunks; 
@property (assign,nonatomic) int itemsNeedingChunks;                           //@synthesize itemsNeedingChunks=_itemsNeedingChunks - In the implementation block
@property (assign,nonatomic) char hasLocalBytes; 
@property (assign,nonatomic) long long localBytes;                             //@synthesize localBytes=_localBytes - In the implementation block
@property (assign,nonatomic) char hasResumedBytes; 
@property (assign,nonatomic) long long resumedBytes;                           //@synthesize resumedBytes=_resumedBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * authHttpInfos;                   //@synthesize authHttpInfos=_authHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerHttpInfos;              //@synthesize containerHttpInfos=_containerHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * completeHttpInfos;               //@synthesize completeHttpInfos=_completeHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * cancelErrors;                    //@synthesize cancelErrors=_cancelErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                          //@synthesize errors=_errors - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(long long)timestamp;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)setTimestamp:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)startTime;
-(int)itemCount;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasStartTime:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasStartTime;
-(NSMutableArray *)errors;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(void)setCancelledErrorDomain:(NSString *)arg1 ;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(void)setAuthHttpInfos:(NSMutableArray *)arg1 ;
-(void)setContainerHttpInfos:(NSMutableArray *)arg1 ;
-(void)setCompleteHttpInfos:(NSMutableArray *)arg1 ;
-(void)setCancelErrors:(NSMutableArray *)arg1 ;
-(void)addAuthHttpInfos:(id)arg1 ;
-(void)addContainerHttpInfos:(id)arg1 ;
-(void)addCompleteHttpInfos:(id)arg1 ;
-(void)addCancelError:(id)arg1 ;
-(void)addError:(id)arg1 ;
-(unsigned)authHttpInfosCount;
-(void)clearAuthHttpInfos;
-(id)authHttpInfosAtIndex:(unsigned)arg1 ;
-(unsigned)containerHttpInfosCount;
-(void)clearContainerHttpInfos;
-(id)containerHttpInfosAtIndex:(unsigned)arg1 ;
-(unsigned)completeHttpInfosCount;
-(void)clearCompleteHttpInfos;
-(id)completeHttpInfosAtIndex:(unsigned)arg1 ;
-(unsigned)cancelErrorsCount;
-(void)clearCancelErrors;
-(id)cancelErrorAtIndex:(unsigned)arg1 ;
-(unsigned)errorsCount;
-(void)clearErrors;
-(id)errorAtIndex:(unsigned)arg1 ;
-(char)hasClientId;
-(char)hasCancelledErrorDomain;
-(void)setCancelledErrorCode:(int)arg1 ;
-(void)setHasCancelledErrorCode:(char)arg1 ;
-(char)hasCancelledErrorCode;
-(char)hasRequestErrorDomain;
-(void)setRequestErrorCode:(int)arg1 ;
-(void)setHasRequestErrorCode:(char)arg1 ;
-(char)hasRequestErrorCode;
-(void)setItemCount:(int)arg1 ;
-(void)setHasItemCount:(char)arg1 ;
-(char)hasItemCount;
-(NSString *)clientId;
-(NSString *)cancelledErrorDomain;
-(int)cancelledErrorCode;
-(NSString *)requestErrorDomain;
-(int)requestErrorCode;
-(NSMutableArray *)authHttpInfos;
-(NSMutableArray *)containerHttpInfos;
-(NSMutableArray *)completeHttpInfos;
-(NSMutableArray *)cancelErrors;
-(void)setItemsNeedingChunks:(int)arg1 ;
-(void)setHasItemsNeedingChunks:(char)arg1 ;
-(char)hasItemsNeedingChunks;
-(void)setLocalBytes:(long long)arg1 ;
-(void)setHasLocalBytes:(char)arg1 ;
-(char)hasLocalBytes;
-(void)setResumedBytes:(long long)arg1 ;
-(void)setHasResumedBytes:(char)arg1 ;
-(char)hasResumedBytes;
-(int)itemsNeedingChunks;
-(long long)localBytes;
-(long long)resumedBytes;
@end

