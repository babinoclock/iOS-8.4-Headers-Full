/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXLiveRegionNode : NSObject {

	NSString* _label;
	NSString* _value;
	unsigned long long _traits;

}

@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long traits;              //@synthesize traits=_traits - In the implementation block
+(id)createNodeFromObject:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)traits;
-(void)setTraits:(unsigned long long)arg1 ;
@end

