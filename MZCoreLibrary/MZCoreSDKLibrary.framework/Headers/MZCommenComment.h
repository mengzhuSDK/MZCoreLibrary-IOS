//
//  MZCommenComment.h
//  mengzhuIOS
//  临时业务通用宏定义文件（后期需要拆分至业务层）
//  Created by 孙显灏 on 2019/6/20.
//  Copyright © 2019 孙显灏. All rights reserved.
//

#ifndef MZCommenComment_h
#define MZCommenComment_h

/***************************发起端视频质量********************************/
#pragma mark 发起端视频质量

#define kLowVideoResolution0     0 //低分边率       352*288
#define kGeneralVideoResolution1 1 //普通分辨率     640*480
#define kHVideoResolution2       2 //高分辨率       960*540
#define kHDVideoResolution3      3 //超高分辨率     1280*720



/****************************分享********************************/


#pragma mark 分享

typedef enum {
    MZShare_WeiXin = 0,
    MZShare_WeiXinPYQ,
    MZShare_QQ,
    MZShare_Save, //保存到本地相册
    MZShare_Copy, //复制链接
    MZShare_WeiBo,
    MZShare_NO,
    MZMengZhu,
    MZShare_VisitCard, //邀请卡
    MZQRCode,//频道二维码
}MZShareType;

typedef enum {
    MZShare,  //分享
    MZInvite,  //邀请
    MZLiveShare //直播分享
}MZShareOrInvite;

typedef void (^MZShareCompletion)(BOOL MZShareCompletionFlag);
#define MZShare_DefaultImage  [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_channelShare_placeHolder"]
#define MZShare_DefaultTitle  @"盟主"
#define MZShare_DefaultUrl    @"https://www.zmengzhu.com"

/****************************其他*********************************/
#pragma mark 其他

#define MZ_UserDefaults [NSUserDefaults standardUserDefaults]
#define MZ_SETTING      [MZStystemSetting sharedSetting]
//#define MZ_THEME        [MZThemeManager sharedManager]

//启动信息
#define MZLaunchItem_Cache      @"KLaunchItem"
#define MZLaunchItem_Clicked    @"KLaunchItemClicked"//点击广告
#define MZLaunchItem_Timeout    86400*30*12*30
#define kIsFirstLaunchApp       @"firstLaunchApp"

//系统弹窗取消按钮标题
#define MZMSG_CANCEL            @"取消"


//默认图片
//头像
#define MZ_UserIcon_DefaultImage [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_personPlaceHold"]
//活动封面
#define MZ_FocusDefaultImage     [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_cover_default"]//尺寸大约 16：9
//头像-SDK
#define MZ_SDK_UserIcon_DefaultImage [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_personPlaceHold"]
//活动封面-SDK
#define MZ_SDK_FocusDefaultImage     [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_cover_default"]

//(barnner)活动封面
#define MZ_BarnnerFocusDefaultImage     [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_barnnerCover_default"]//尺寸大约 3：1

//(商品)详情占位图
#define MZ_GoodsFocusDefaultImage     [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/MZ_GoodsFocusDefaultImage"]//尺寸大约 1：1

//(图文广告)活动封面
#define MZ_ADFocusDefaultImage     [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/MZ_ADFocusDefaultImage"]


//礼物
#define MZ_GiftDefaultImage      [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_gift_placeHolder"]
//等级
#define MZ_Level_Image(a)        [UIImage imageNamed:[NSString stringWithFormat:@"v%@",a]]
//更多--频道
#define MZ_ChannelDefaultImage   [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_cover_default"]

//商品图片默认图
#define MZ_GoodsPlaceHolder   [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_goods_defaultImage"]
//mz_qrDefaultImage
#define MZ_QrPlaceHolder      [UIImage imageNamed:@"MZCoreSDKLibrary.bundle/mz_qrDefaultImage"]


/**********************支付**************************/
#pragma mark 支付

#define kQuertPayResultSleepTime  2 //查询支付结果统一延时1s
//购买物品类型
typedef enum {
    MZRewardItem = 11,     //打赏
    MZInviteItem = 21,     //邀约红包
    MZRedPacketItem = 26,  //发红包(邀约/注册/拼手气)
    MZGiftItem   = 31,     //虚拟礼物
    MZRechargeItem   = 61, //钱包充值
    MZVoteItem=29,//付费投票付费
    MZDocDownItem = 30,//付费投票付费
}MZBuyItemType;

//支付方式
typedef enum {
    MZBalancePay,  //银两支付
    MZSliverPay,   //铜钱支付
    MZAliPay,      //支付宝支付
    MZWeixinPay,     //微信支付
    MZNoPay        //无支付
}MZPayType;

//支付状态
typedef enum {
    MZPaySuccess,//支付成功
    MZPayFail,   //支付失败
    MZPayCannel  //用户取消
}MZPayState;

#pragma mark 升级状态
typedef enum {
    appIgnoreUpdate,       //忽略
    appOpenUpdate,         //app打开提示升级(可选择不升级)
    appOpenSystemSetUpdate,//app在系统设置检查版本升级
    appMustUpdate          //强制升级(不升级，强制直接退出app)
}appUpdateStatus;

/********************我的频道中点击事件的类型***********************/

#pragma mark 我的频道中点击事件的类型

// ///////////////////////////////////////////

//启动页接口
#define MZLAUNCH_Cache        @"launch"

//首页(关注、推荐)
#define MZFIND_CacheArr        @[@"recommend",@"attention"]

/********************直播相关***********************/

#pragma 直播相关

//直播数据缓存参数
#define MZLive_PushCacheTimeOut       3600*24
#define MZLive_PushPresentCache  @"pushPresent"
#define MZLive_PushSheetCache    @"pushSheet"
#define MZLive_PushProductCache  @"pushProduct"


//默认请求超时时间
#define MZTimeout  60
#define KCacheNetSeverItem [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define KCacheNetSeverItem_Timeout 3600*24*14

//首页数据缓存参数
#define MZHomeRecommendCache    @"recommend"
#define MZHomeFollowCache       @"follow"
#define MZHomeCenterCache       @"homeCenter"
#define MZHomeCacheTimeOut      3600*24

//观看端数据缓存参数
#define MZPlayer_PushCacheTimeOut       3600*24  //观看端网络数据缓存时间
#define MZPlayer_SystemGiftCache        @"MZPlayerSystemGiftCache"//系统默认礼物数据
#define MZPlayer_PushGiftCache          @"MZPlayerPushGiftCache"//助理推送礼物数据
//#define MZPlayer_PushSheetCache         @"MZPlayerPushSheetCache"//助理推送表单数据
#define MZPlayer_PushProductCache       @"MZPlayerPushProductCache"//助理推送产品数据

//播放器付款标志(v1.1.4新增)
#define MZPlayer_IsYiBao_WeiXin_Paying        @"MZPlayerYiBaoWeiXinIsPaying"
#define MZPlayer_IsYiBao_WeiXin_NoPaying      @"MZPlayerYiBaoWeiXinIsNoPaying"
#define MZPlayer_YiBaoWeiXinPayCache          @"MZPlayerYiBaoWeiXinPayCache"
#define MZPlayer_YiBaoWeiXinPayCacheTimeOut    3600 * 24

//记录注册状态
#define MZUser_Regsiter_Status         @"MZUserRegsiterStatus"
#define MZUser_Regsiter_YES            @"MZUserRegsiterStatusYes"

//网络网址
#define MZNET_SEVERURL_ITEM  [MZNetSeverUrlManager sharedManager].netSeverUrlItem


/********************自定义宏方法***********************/

#pragma mark 自定义宏方法

//商城图片URL拼接
#define MZ_ShoppingCenter_GoodsImage(imageUrl,size)  [MZBaseImageTools shareImageWithImageUrl:[MZBaseGlobalTools shoppingCenterAddDefaultImageUrlPrefix:imageUrl] Size:size]
//抽象类异常处理
#define AbstractMethodNotImplemented() \
@throw [NSException exceptionWithName:NSInternalInconsistencyException \
reason:[NSString stringWithFormat:@"You must override %@ in a subclass.", NSStringFromSelector(_cmd)] \
userInfo:nil]

//私信的单例对象
#define SPYWIMKit         [SPKitExample sharedInstance].ywIMKit


#define YWFetchResultsController        [[[SPKitExample sharedInstance].ywIMKit.IMCore getContactService] fetchedResultsControllerWithListMode:(YWContactListMode)YWContactListModeAlphabetic imCore:[SPKitExample sharedInstance].ywIMKit.IMCore]

//通知的一些宏



//本地缓存的宏
#define MZBarrageSwitchDic             @"MZBarrageSwitchDicLocalCacheCDic"//弹幕开关总的宏
#define MZBarrageSendSwitch             @"MZBarrageSendSwitch"//是否发弹幕消息（默认是不是弹幕消息）
//#define MZSendBarrageSwitchIsExist            @"MZSendBarrageSwitchIsExist"//是否发弹幕消息（默认是不是弹幕消息）
#define MZBarrageMessageIsShow                @"MZBarrageMessageIsShow"//是否显示弹幕消息
#define MZBarrageGiftMessageIsShow             @"MZBarrageGiftMessageIsShow"//是否显示弹幕消息
#define MZBarrageChatMessageIsShow             @"MZBarrageChatMessageIsShow"//是否显示弹幕消息

#endif /* MZCommenComment_h */


