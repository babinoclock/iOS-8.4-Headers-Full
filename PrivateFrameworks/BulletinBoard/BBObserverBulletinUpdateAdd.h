/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBObserverBulletinUpdate.h>

@interface BBObserverBulletinUpdateAdd : BBObserverBulletinUpdate {

	char _shouldPlayLightsAndSirens;

}

@property (nonatomic,readonly) char shouldPlayLightsAndSirens;              //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)shouldPlayLightsAndSirens;
-(id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned)arg3 ;
-(id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned)arg3 shouldPlayLightsAndSirens:(char)arg4 ;
@end

