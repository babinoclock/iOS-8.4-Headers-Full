/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, NSSet, NetworkAttachment;

@interface Flow : NSManagedObject

@property (nonatomic,retain) NSDate * firstTimeStamp; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSString * remoteID; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLivePerformance; 
@property (nonatomic,retain) NetworkAttachment * onNetwork; 
@end

