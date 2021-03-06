/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SyndromeHandlerProtocol.h>

@class NSString, ManagedEventHandler;

@interface FallbackUsageSyndromeHandler : NSObject <SyndromeHandlerProtocol> {

	NSString* _syndromeName;
	char* _syndromeUTF8Name;
	ManagedEventHandler* _eventHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(int)configure:(id)arg1 ;
+(id)getHandlerByName:(id)arg1 ;
-(NSString *)description;
-(void)didReceiveSyndrome:(id)arg1 ;
@end

