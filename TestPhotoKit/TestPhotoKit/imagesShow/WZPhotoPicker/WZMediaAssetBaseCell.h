//
//  WZMediaAssetBaseCell.h
//  WZPhotoPicker
//
//  Created by wizet on 2017/5/21.
//  Copyright © 2017年 wizet. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WZMediaFetcher.h"

@interface WZMediaAssetBaseCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIButton *button_select;
@property (nonatomic, strong) void (^selectedBlock)(BOOL selected);
@property (nonatomic, strong) WZMediaAsset *asset;

//网络加载 写进度

@end
