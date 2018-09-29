//
//  JQCollectionViewAlignLayout.h
//  JQCollectionViewAlignLayout-Demo
//
//  Created by Joker on 2017/12/28.
//  Copyright © 2017年 Joker. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, JQCollectionViewItemAlignment) {
    JQCollectionViewItemAlignmentFlow,      /**< 流水 */
    JQCollectionViewItemAlignmentLeft,      /**< 居左 */
    JQCollectionViewItemAlignmentCenter,    /**< 居中 */
    JQCollectionViewItemAlignmentRight,     /**< 居右 */
    JQCollectionViewItemAlignmentTile       /**< 平铺 */
};

@class JQCollectionViewAlignLayout;
@protocol JQCollectionViewAlignLayoutDelegate <UICollectionViewDelegateFlowLayout>
@optional
/**
 设置不同 section 的对齐方式

 @param layout JQCollectionViewAlignLayout
 @param section section
 @return 对齐方式
 */
- (JQCollectionViewItemAlignment)collectionView:(UICollectionView *)collectionView layout:(JQCollectionViewAlignLayout *)layout itemAlignmentInSection:(NSInteger)section;

@end

@interface JQCollectionViewAlignLayout : UICollectionViewFlowLayout

/// 对齐类型，默认为 JQCollectionViewItemAlignmentFlow
@property (nonatomic) JQCollectionViewItemAlignment itemAlignment;

@end

@interface JQCollectionViewAlignLayout (unavailable)

// 禁用 setScrollDirection: 方法，默认为 UICollectionViewScrollDirectionVertical
- (void)setScrollDirection:(UICollectionViewScrollDirection)scrollDirection NS_UNAVAILABLE;

@end
