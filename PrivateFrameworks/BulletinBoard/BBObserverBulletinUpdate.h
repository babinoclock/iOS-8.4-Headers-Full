/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/NSSecureCoding.h>

@class BBBulletin;

@interface BBObserverBulletinUpdate : NSObject <NSSecureCoding> {

	BBBulletin* _bulletin;
	unsigned _transactionID;
	int _updateType;

}

@property (nonatomic,retain,readonly) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) int updateType;                            //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) unsigned transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)transactionID;
-(id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned)arg3 ;
-(BBBulletin *)bulletin;
-(int)updateType;
@end

