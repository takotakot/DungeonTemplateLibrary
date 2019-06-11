﻿/*#######################################################################################
	Copyright (c) 2017-2019 Kasugaccho
	Copyright (c) 2018-2019 As Project
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	Distributed under the Boost Software License, Version 1.0. (See accompanying
	file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#######################################################################################*/
#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANGE_RECT_BASE_DOBUTSU_SHOGI_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTL_RANGE_RECT_BASE_DOBUTSU_SHOGI_HPP

#include <DTL/Base/Struct.hpp>
#include <DTL/Macros/constexpr.hpp>
#include <DTL/Macros/nodiscard.hpp>
#include <DTL/Type/SizeT.hpp>
#include <DTL/Range/BasicRect.hpp>

/*#######################################################################################
	[概要] "dtl名前空間"とは"DungeonTemplateLibrary"の全ての機能が含まれる名前空間である。
	[Summary] The "dtl" is a namespace that contains all the functions of "DungeonTemplateLibrary".
#######################################################################################*/
namespace dtl {
	inline namespace range { //"dtl::range"名前空間に属する

		template<typename Matrix_Int_>
		struct DobutsuShogiList {
			Matrix_Int_ chick_1{};
			Matrix_Int_ chick_2{};
			Matrix_Int_ hen_1{};
			Matrix_Int_ hen_2{};
			Matrix_Int_ giraffe_1{};
			Matrix_Int_ giraffe_2{};
			Matrix_Int_ elephant_1{};
			Matrix_Int_ elephant_2{};
			Matrix_Int_ lion_1{};
			Matrix_Int_ lion_2{};

			constexpr DobutsuShogiList() = default;

			constexpr explicit DobutsuShogiList(
				const Matrix_Int_& chick_1_,
				const Matrix_Int_& chick_2_,
				const Matrix_Int_& hen_1_,
				const Matrix_Int_& hen_2_,
				const Matrix_Int_& giraffe_1_,
				const Matrix_Int_& giraffe_2_,
				const Matrix_Int_& elephant_1_,
				const Matrix_Int_& elephant_2_,
				const Matrix_Int_& lion_1_,
				const Matrix_Int_& lion_2_) noexcept :
				chick_1(chick_1_),
				chick_2(chick_2_),
				hen_1(hen_1_),
				hen_2(hen_2_),
				giraffe_1(giraffe_1_),
				giraffe_2(giraffe_2_),
				elephant_1(elephant_1_),
				elephant_2(elephant_2_),
				lion_1(lion_1_),
				lion_2(lion_2_) {}

			constexpr explicit DobutsuShogiList(
				const Matrix_Int_& chick_,
				const Matrix_Int_& hen_,
				const Matrix_Int_& giraffe_,
				const Matrix_Int_& elephant_,
				const Matrix_Int_& lion_) noexcept :
				chick_1(chick_),
				chick_2(chick_),
				hen_1(hen_),
				hen_2(hen_),
				giraffe_1(giraffe_),
				giraffe_2(giraffe_),
				elephant_1(elephant_),
				elephant_2(elephant_),
				lion_1(lion_),
				lion_2(lion_) {}
		};


		template<typename Derived_, typename Matrix_Int_>
		class RectBaseDobutsuShogi : public ::dtl::range::BasicRect<Derived_> {
		private:

			///// エイリアス (Alias) /////

			using Index_Size = ::dtl::type::size;
			using RectBase_t = ::dtl::range::BasicRect<Derived_>;


		protected:


			///// メンバ変数 (Member Variable) /////

			::dtl::range::DobutsuShogiList<Matrix_Int_> dobutsuShogiList{};

		public:


			///// メンバ変数の値を取得 (Get Value) /////

			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getChick1() const noexcept {
				return this->dobutsuShogiList.chick_1;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getChick2() const noexcept {
				return this->dobutsuShogiList.chick_2;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getElephant1() const noexcept {
				return this->dobutsuShogiList.elephant_1;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getElephant2() const noexcept {
				return this->dobutsuShogiList.elephant_2;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getGiraffe1() const noexcept {
				return this->dobutsuShogiList.giraffe_1;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getGiraffe2() const noexcept {
				return this->dobutsuShogiList.giraffe_2;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getHen1() const noexcept {
				return this->dobutsuShogiList.hen_1;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getHen2() const noexcept {
				return this->dobutsuShogiList.hen_2;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getLion1() const noexcept {
				return this->dobutsuShogiList.lion_1;
			}
			DTL_VERSIONING_CPP17_NODISCARD
				constexpr Matrix_Int_ getLion2() const noexcept {
				return this->dobutsuShogiList.lion_2;
			}

			DTL_VERSIONING_CPP17_NODISCARD
				constexpr ::dtl::range::DobutsuShogiList<Matrix_Int_> getValue() const noexcept {
				return this->dobutsuShogiList;
			}


			///// 消去 (Clear) /////


			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearChick1() noexcept {
				const Matrix_Int_ chick_{};
				return this->dobutsuShogiList.chick_1 = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearChick2() noexcept {
				const Matrix_Int_ chick_{};
				return this->dobutsuShogiList.chick_2 = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearElephant1() noexcept {
				const Matrix_Int_ elephant_{};
				return this->dobutsuShogiList.elephant_1 = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearElephant2() noexcept {
				const Matrix_Int_ elephant_{};
				return this->dobutsuShogiList.elephant_2 = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearGiraffe1() noexcept {
				const Matrix_Int_ giraffe_{};
				return this->dobutsuShogiList.giraffe_1 = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearGiraffe2() noexcept {
				const Matrix_Int_ giraffe_{};
				return this->dobutsuShogiList.giraffe_2 = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearHen1() noexcept {
				const Matrix_Int_ hen_{};
				return this->dobutsuShogiList.hen_1 = hen_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearHen2() noexcept {
				const Matrix_Int_ hen_{};
				return this->dobutsuShogiList.hen_2 = hen_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearLion1() noexcept {
				const Matrix_Int_ lion_{}
				return this->dobutsuShogiList.lion_1 = lion_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearLion2() noexcept {
				const Matrix_Int_ lion_{};
				return this->dobutsuShogiList.lion_2 = lion_;
				return static_cast<Derived_&>(*this);
			}

			/*#######################################################################################
				[概要] 塗り値を初期値に戻す(描画値を消去する)。
				[戻り値] 戻り値の型は 当クラスの参照値 である。
				[Summary] Resets the drawing value to the initial value (deletes the drawing value).
				[Return value] The return type is a reference value of this class.
			#######################################################################################*/
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clearValue() noexcept {
				const ::dtl::range::DobutsuShogiList<Matrix_Int_> new_draw_value{};
				this->dobutsuShogiList = new_draw_value;
				return static_cast<Derived_&>(*this);
			}

			/*#######################################################################################
				[概要] 全ての値を初期値に戻す。
				[戻り値] 戻り値の型は 当クラスの参照値 である。
				[Summary] Reset all values to their initial values.
				[Return value] The return type is a reference value of this class.
			#######################################################################################*/
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& clear() noexcept {
				this->clearRange();
				this->clearValue();
				return static_cast<Derived_&>(*this);
			}


			///// 代入 /////

			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setChick1(const Matrix_Int_& chick_) noexcept {
				return this->dobutsuShogiList.chick_1 = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setChick2(const Matrix_Int_& chick_) noexcept {
				return this->dobutsuShogiList.chick_2 = chick_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setElephant1(const Matrix_Int_& elephant_) noexcept {
				return this->dobutsuShogiList.elephant_1 = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setElephant2(const Matrix_Int_& elephant_) noexcept {
				return this->dobutsuShogiList.elephant_2 = elephant_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setGiraffe1(const Matrix_Int_& giraffe_) noexcept {
				return this->dobutsuShogiList.giraffe_1 = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setGiraffe2(const Matrix_Int_& giraffe_) noexcept {
				return this->dobutsuShogiList.giraffe_2 = giraffe_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setHen1(const Matrix_Int_& hen_) noexcept {
				return this->dobutsuShogiList.hen_1 = hen_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setHen2(const Matrix_Int_& hen_) noexcept {
				return this->dobutsuShogiList.hen_2 = hen_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setLion1(const Matrix_Int_& lion_) noexcept {
				return this->dobutsuShogiList.lion_1 = lion_;
				return static_cast<Derived_&>(*this);
			}
			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setLion2(const Matrix_Int_& lion_) noexcept {
				return this->dobutsuShogiList.lion_2 = lion_;
				return static_cast<Derived_&>(*this);
			}

			DTL_VERSIONING_CPP14_CONSTEXPR
				Derived_& setValue(const ::dtl::range::DobutsuShogiList<Matrix_Int_>& draw_value_) noexcept {
				this->dobutsuShogiList = draw_value_;
				return static_cast<Derived_&>(*this);
			}


			///// コンストラクタ (Constructor) /////

			using RectBase_t::RectBase_t;

			constexpr explicit RectBaseDobutsuShogi(const ::dtl::range::DobutsuShogiList<Matrix_Int_>& draw_value_) noexcept
				:dobutsuShogiList(draw_value_) {}

			constexpr explicit RectBaseDobutsuShogi(
				const Matrix_Int_& chick_1_, const Matrix_Int_& chick_2_,
				const Matrix_Int_& hen_1_, const Matrix_Int_& hen_2_,
				const Matrix_Int_& giraffe_1_, const Matrix_Int_& giraffe_2_,
				const Matrix_Int_& elephant_1_, const Matrix_Int_& elephant_2_,
				const Matrix_Int_& lion_1_, const Matrix_Int_& lion_2_) noexcept :
				dobutsuShogiList(chick_1_, chick_2_, hen_1_, hen_2_, giraffe_1_, giraffe_2_, elephant_1_, elephant_2_, lion_1_, lion_2_) {}

			constexpr explicit RectBaseDobutsuShogi(
				const Matrix_Int_& chick_, const Matrix_Int_& hen_,
				const Matrix_Int_& giraffe_, const Matrix_Int_& elephant_, const Matrix_Int_& lion_) noexcept :
				dobutsuShogiList(chick_, chick_, hen_, hen_, giraffe_, giraffe_, elephant_, elephant_, lion_, lion_) {}

			constexpr explicit RectBaseDobutsuShogi(const ::dtl::base::MatrixRange& matrix_range_, const ::dtl::range::DobutsuShogiList<Matrix_Int_>& draw_value_) noexcept
				:RectBase_t(matrix_range_),
				dobutsuShogiList(draw_value_) {}
			constexpr explicit RectBaseDobutsuShogi(const Index_Size start_x_, const Index_Size start_y_, const Index_Size width_, const Index_Size height_, const ::dtl::range::DobutsuShogiList<Matrix_Int_>& draw_value_) noexcept
				:RectBase_t(start_x_, start_y_, width_, height_),
				dobutsuShogiList(draw_value_) {}
		};
	}
}

#endif //Included Dungeon Template Library
