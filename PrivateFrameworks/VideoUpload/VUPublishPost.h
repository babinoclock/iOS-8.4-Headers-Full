/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VUPublishPostDelegate;
@interface VUPublishPost : NSObject {

	id<VUPublishPostDelegate> _delegate;
	char _allowsCellularAccessForUploads;

}

@property (assign,nonatomic) char allowsCellularAccessForUploads;              //@synthesize allowsCellularAccessForUploads=_allowsCellularAccessForUploads - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)startUpload;
-(char)allowsCellularAccessForUploads;
-(void)setAllowsCellularAccessForUploads:(char)arg1 ;
@end

