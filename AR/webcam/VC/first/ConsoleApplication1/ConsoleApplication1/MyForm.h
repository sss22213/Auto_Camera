#pragma once
#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "MyForm1.h"
#include "../user/core.h"



namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::Media;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  檔案ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  關閉ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  紀錄ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看紀錄ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  關於ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  關於ToolStripMenuItem1;

	public:
		//Time
		int time = 0;
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->檔案ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->關閉ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->紀錄ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看紀錄ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->關於ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->關於ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(355, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 95);
			this->button1->TabIndex = 0;
			this->button1->Text = L"照相";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(375, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"準備開始";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(344, 540);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(269, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"銘傳大學電子工程學系晶片設計與應用實驗室發行";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->檔案ToolStripMenuItem,
					this->紀錄ToolStripMenuItem, this->關於ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(960, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 檔案ToolStripMenuItem
			// 
			this->檔案ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->關閉ToolStripMenuItem });
			this->檔案ToolStripMenuItem->Name = L"檔案ToolStripMenuItem";
			this->檔案ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->檔案ToolStripMenuItem->Text = L"檔案";
			// 
			// 關閉ToolStripMenuItem
			// 
			this->關閉ToolStripMenuItem->Name = L"關閉ToolStripMenuItem";
			this->關閉ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->關閉ToolStripMenuItem->Text = L"關閉";
			this->關閉ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::關閉ToolStripMenuItem_Click);
			// 
			// 紀錄ToolStripMenuItem
			// 
			this->紀錄ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->查看紀錄ToolStripMenuItem });
			this->紀錄ToolStripMenuItem->Name = L"紀錄ToolStripMenuItem";
			this->紀錄ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->紀錄ToolStripMenuItem->Text = L"紀錄";
			// 
			// 查看紀錄ToolStripMenuItem
			// 
			this->查看紀錄ToolStripMenuItem->Name = L"查看紀錄ToolStripMenuItem";
			this->查看紀錄ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->查看紀錄ToolStripMenuItem->Text = L"查看紀錄";
			this->查看紀錄ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::查看紀錄ToolStripMenuItem_Click);
			// 
			// 關於ToolStripMenuItem
			// 
			this->關於ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->關於ToolStripMenuItem1 });
			this->關於ToolStripMenuItem->Name = L"關於ToolStripMenuItem";
			this->關於ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->關於ToolStripMenuItem->Text = L"關於";
			// 
			// 關於ToolStripMenuItem1
			// 
			this->關於ToolStripMenuItem1->Name = L"關於ToolStripMenuItem1";
			this->關於ToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->關於ToolStripMenuItem1->Text = L"關於";
			this->關於ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::關於ToolStripMenuItem1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 576);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//資料夾儲存路徑
		const string path = "";
		//照片數目
		const int counter = 500;
		//新增webcam
		VideoCapture capture(0);
		//新增webcam物件
		webcam *W1 = new webcam(capture, 1280, 720, 30);
		MessageBox::Show("調整好位置，按下ESC開始拍照");
		label1->Text = "影像校正中";
		waitKey(1000);
		while (1)
		{
			Mat frames = W1->Catch_image();
			imshow("AW", frames);
			waitKey(30);
			if (cvWaitKey(30) == 27)
			{
				destroyWindow("AW");
				break;
			}
		}
		waitKey(1000);
		for (int i = 0; i < counter; i++)
		{
			//抓取攝影機影像
			Mat frames = W1->Catch_image();
			std::string s = std::to_string(i);
			imwrite(path+s+".jpg", frames);
			waitKey(100);
		}
		waitKey(1000);
		label1->Text = "拍照完成";
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		time++;
		int minute = time / 60;
		int second = time % 60;
		label1->Text = Convert::ToString(minute) + "分" + Convert::ToString(second) + "秒";
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 關閉ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Close();
}
private: System::Void 關於ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Open MyFrom1
	MyForm1^ MyForms = gcnew MyForm1();
	MyForms->Show();
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	

}
private: System::Void 查看紀錄ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
