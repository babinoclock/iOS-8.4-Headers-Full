/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VUCategory : NSObject {

	NSString* _displayName;
	id _value;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
+(id)categoryWithDisplayName:(id)arg1 value:(id)arg2 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

