/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding> {

	NSString* _semantic;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSString * semantic;                   //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(id)infoWithSemantic:(id)arg1 options:(id)arg2 ;
+(char)supportsSecureCoding;
-(NSString *)semantic;
-(void)setSemantic:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
@end
