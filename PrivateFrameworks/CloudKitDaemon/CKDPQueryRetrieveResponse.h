/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying> {

	NSData* _continuationMarker;
	NSMutableArray* _queryResults;

}

@property (nonatomic,retain) NSMutableArray * queryResults;              //@synthesize queryResults=_queryResults - In the implementation block
@property (nonatomic,readonly) char hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                //@synthesize continuationMarker=_continuationMarker - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(NSMutableArray *)queryResults;
-(char)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)addQueryResults:(id)arg1 ;
-(unsigned)queryResultsCount;
-(void)clearQueryResults;
-(id)queryResultsAtIndex:(unsigned)arg1 ;
-(void)setQueryResults:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

