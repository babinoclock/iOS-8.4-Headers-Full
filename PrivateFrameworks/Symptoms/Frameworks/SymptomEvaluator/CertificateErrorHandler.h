/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface CertificateErrorHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {

	NSMutableDictionary* _banned;
	NSMutableArray* _store;
	id _resetObserver;
	unsigned _maxAge;
	unsigned _maxCount;

}

@property (assign,nonatomic) unsigned maxAge;                       //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned maxCount;                     //@synthesize maxCount=_maxCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configure:(id)arg1 ;
-(void)setMaxCount:(unsigned)arg1 ;
-(id)init;
-(NSString *)description;
-(void)_reset:(id)arg1 ;
-(int)configure:(id)arg1 ;
-(unsigned)maxCount;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
-(unsigned)maxAge;
-(void)setMaxAge:(unsigned)arg1 ;
@end
