/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABActionSheetDelegate, ABStyleProvider, ABPersonViewControllerHelper, NSString, UIImage;

@interface ABPersonTableViewSharingDelegate : NSObject {

	ABActionSheetDelegate* _actionSheetDelegate;
	char _shareMessageBodyIsHTML;
	ABStyleProvider* _styleProvider;
	ABPersonViewControllerHelper* _helper;
	NSString* _shareMessageBody;
	NSString* _shareMessageSubject;
	NSString* _shareLocationURL;
	UIImage* _shareLocationSnapshotImage;
	/*^block*/id _willTweetLocationCallback;
	/*^block*/id _willWeiboLocationCallback;

}

@property (nonatomic,retain) ABStyleProvider * styleProvider;                    //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) ABPersonViewControllerHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) char canShareContact; 
@property (nonatomic,readonly) char canSendMMS; 
@property (nonatomic,readonly) char canSendMail; 
@property (nonatomic,readonly) char canTweet; 
@property (nonatomic,readonly) char canWeibo; 
@property (assign,nonatomic) char shareMessageBodyIsHTML;                        //@synthesize shareMessageBodyIsHTML=_shareMessageBodyIsHTML - In the implementation block
@property (nonatomic,copy) NSString * shareMessageBody;                          //@synthesize shareMessageBody=_shareMessageBody - In the implementation block
@property (nonatomic,copy) NSString * shareMessageSubject;                       //@synthesize shareMessageSubject=_shareMessageSubject - In the implementation block
@property (nonatomic,copy) NSString * shareLocationURL;                          //@synthesize shareLocationURL=_shareLocationURL - In the implementation block
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage;               //@synthesize shareLocationSnapshotImage=_shareLocationSnapshotImage - In the implementation block
@property (nonatomic,copy) id willTweetLocationCallback;                         //@synthesize willTweetLocationCallback=_willTweetLocationCallback - In the implementation block
@property (nonatomic,copy) id willWeiboLocationCallback;                         //@synthesize willWeiboLocationCallback=_willWeiboLocationCallback - In the implementation block
+(id)_fakePersonForMergedPeople:(id)arg1 ;
-(ABPersonViewControllerHelper *)helper;
-(void)setHelper:(ABPersonViewControllerHelper *)arg1 ;
-(void)setWillTweetLocationCallback:(id)arg1 ;
-(char)loadMessageUIAndReturnBundle:(id*)arg1 ;
-(void)getVCardData:(id*)arg1 exportMode:(int)arg2 fileName:(id*)arg3 ;
-(NSString *)shareMessageSubject;
-(NSString *)shareLocationURL;
-(id)willTweetLocationCallback;
-(id)willWeiboLocationCallback;
-(void)shareContactByEmail:(id)arg1 ;
-(void)shareContactByTextMessage:(id)arg1 ;
-(void)shareLocationOnTwitter:(id)arg1 ;
-(void)shareLocationOnWeibo:(id)arg1 ;
-(void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2 ;
-(char)loadChatKitAndReturnBundle:(id*)arg1 ;
-(id)vCardFileName;
-(char)canSendMMS;
-(char)canTweet;
-(char)canWeibo;
-(void)shareContactFromButtonItem:(id)arg1 ;
-(void)shareContact:(id)arg1 ;
-(char)canShareContact;
-(char)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(char)arg1 ;
-(NSString *)shareMessageBody;
-(void)setShareMessageBody:(NSString *)arg1 ;
-(void)setShareMessageSubject:(NSString *)arg1 ;
-(void)setShareLocationURL:(NSString *)arg1 ;
-(UIImage *)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(UIImage *)arg1 ;
-(void)setWillWeiboLocationCallback:(id)arg1 ;
-(ABStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
-(void)dealloc;
-(id)init;
-(char)canSendMail;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end

