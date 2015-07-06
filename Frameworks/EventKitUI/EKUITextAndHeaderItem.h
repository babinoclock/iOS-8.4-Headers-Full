/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface EKUITextAndHeaderItem : NSObject {

	NSString* _text;
	NSString* _header;

}

@property (nonatomic,retain) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * header;                                      //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)itemWithText:(id)arg1 andHeader:(id)arg2 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
@end

