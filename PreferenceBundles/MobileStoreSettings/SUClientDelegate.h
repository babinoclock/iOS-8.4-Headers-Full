/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUClientDelegate <NSObject>
@optional
-(char)client:(id)arg1 presentComposeReviewViewController:(id)arg2 animated:(char)arg3;
-(id)topViewControllerForClient:(id)arg1;
-(char)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(char)arg3;
-(char)client:(id)arg1 openInternalURL:(id)arg2;
-(id)downloadManagerForClient:(id)arg1 downloadKinds:(id)arg2;
-(id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;

@required
-(char)client:(id)arg1 presentModalViewController:(id)arg2 animated:(char)arg3;

@end

