/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {

	GSAddition* _addition;
	unsigned long long _fileID;

}

@property (retain) GSAddition * addition;              //@synthesize addition=_addition - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setAddition:(GSAddition *)arg1 ;
-(GSAddition *)addition;
-(id)initWithAddition:(id)arg1 ;
-(char)isStillValid;
@end

