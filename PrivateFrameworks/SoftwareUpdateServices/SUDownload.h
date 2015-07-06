/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/NSSecureCoding.h>
#import <SoftwareUpdateServices/NSCopying.h>

@class SUDescriptor, SUOperationProgress, SUDownloadMetadata;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying> {

	SUDescriptor* _descriptor;
	SUOperationProgress* _progress;
	SUDownloadMetadata* _metadata;

}

@property (nonatomic,retain) SUDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUOperationProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) SUDownloadMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(SUOperationProgress *)arg1 ;
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(SUOperationProgress *)progress;
-(SUDescriptor *)descriptor;
-(void)setMetadata:(SUDownloadMetadata *)arg1 ;
-(SUDownloadMetadata *)metadata;
-(unsigned long long)totalSpaceConsumed;
@end

