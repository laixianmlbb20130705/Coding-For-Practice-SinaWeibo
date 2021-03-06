//
//  UserGridView.h
//  WXWeibo
//
//  Created by Wu Xin on 13-5-15.
//  Copyright (c) 2013年 www.iphonetrain.com 无限互联3G学院. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UserModel;
@interface UserGridView : UIView

@property (retain, nonatomic) UserModel *userModel;
@property (retain, nonatomic) IBOutlet UILabel *nickLabel;
@property (retain, nonatomic) IBOutlet UILabel *fansLabel;
@property (retain, nonatomic) IBOutlet UIButton *imageButton;
- (IBAction)userImageAction:(id)sender;
@end
