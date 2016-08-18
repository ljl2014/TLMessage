//
//  TLMessageCell.h
//  TLMessageView
//
//  Created by 郭锐 on 16/8/18.
//  Copyright © 2016年 com.garry.message. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TLProjectMacro.h"
#import "NSDate+Utils.h"
#import <Masonry.h>
#import <RongIMLib/RongIMLib.h>

@interface TLMessageCell : UITableViewCell
@property(nonatomic,strong)UIImageView *bubbleImageView;
@property(nonatomic,strong)UIImageView *arrowImageView;
@property(nonatomic,strong)UIView *statusView;
@property(nonatomic,strong)UIActivityIndicatorView *activityIndicator;
@property(nonatomic,strong)UIButton *retryBtn;
@property(nonatomic,strong)UIImageView *avatarImageView;
@property(nonatomic,strong)NSMutableArray *constraints;
@property(nonatomic,strong)UILabel *dateTimeLabel;

@property(nonatomic,strong)RCMessage *message;
-(void)updateMessage:(RCMessage *)message showDate:(BOOL)showDate;
@end