/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GrammarPart : NSObject {

	int _order;
	int _depth;
	NSString* _name;

}

@property (readonly) int order;                    //@synthesize order=_order - In the implementation block
@property (readonly) int depth;                    //@synthesize depth=_depth - In the implementation block
@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)instanceFromPlist:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(int)order;
-(int)depth;
-(void)genericSetUpFromPlist:(id)arg1 ;
-(int)orderComparedTo:(id)arg1 ;
-(id)appliedTo:(id)arg1 ;
@end

