/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@class SSOperationProgress, NSString;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying> {

	SSOperationProgress* _operationProgress;

}

@property (readonly) int phaseType; 
@property (readonly) long long progressValue; 
@property (readonly) long long totalProgressValue; 
@property (readonly) int progressUnits; 
@property (readonly) double estimatedSecondsRemaining; 
@property (readonly) float progressChangeRate; 
@property (readonly) SSOperationProgress * operationProgress; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)progressValue;
-(double)estimatedSecondsRemaining;
-(SSOperationProgress *)operationProgress;
-(id)initWithOperationProgress:(id)arg1 ;
-(int)phaseType;
-(int)progressUnits;
-(float)progressChangeRate;
-(long long)totalProgressValue;
@end

