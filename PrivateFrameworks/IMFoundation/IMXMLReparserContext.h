/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSError;

@interface IMXMLReparserContext : NSObject {

	NSString* _inContent;
	NSString* _outContent;
	NSArray* _attributesToPreserve;
	NSDictionary* _attributesToMerge;
	NSError* _error;

}

@property (nonatomic,readonly) NSArray * attributesToPreserve;                //@synthesize attributesToPreserve=_attributesToPreserve - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributesToMerge;              //@synthesize attributesToMerge=_attributesToMerge - In the implementation block
@property (nonatomic,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * outContent;                         //@synthesize outContent=_outContent - In the implementation block
@property (retain,readonly) NSString * _inContent;                            //@synthesize inContent=_inContent - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(NSString *)_inContent;
-(void)_setOutContent:(id)arg1 error:(id)arg2 ;
-(NSArray *)attributesToPreserve;
-(NSDictionary *)attributesToMerge;
-(id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3 ;
-(NSString *)outContent;
@end
