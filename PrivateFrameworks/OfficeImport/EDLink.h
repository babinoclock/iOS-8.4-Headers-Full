/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDCollection;

@interface EDLink : NSObject {

	int mType;
	EDCollection* mExternalNames;

}
+(id)linkWithType:(int)arg1 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(id)externalNames;
@end

