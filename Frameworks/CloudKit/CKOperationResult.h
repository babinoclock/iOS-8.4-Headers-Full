/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@class NSString, NSError, NSArray;

@interface CKOperationResult : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSError* _error;
	NSArray* _requestUUIDs;

}

@property (nonatomic,retain) NSString * operationID;              //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * requestUUIDs;              //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)operationID;
-(NSError *)error;
-(void)setOperationID:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(NSArray *)requestUUIDs;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

