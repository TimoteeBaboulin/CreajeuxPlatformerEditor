#pragma once

namespace SampleSFML {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlatformEditor
	/// </summary>
	public ref class PlatformEditor : public System::Windows::Forms::Form
	{
	public:
		PlatformEditor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlatformEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ filesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ levelObstaclesToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ fileManagerGroupBox;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->levelObstaclesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileManagerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->filesToolStripMenuItem,
					this->gameToolStripMenuItem, this->levelObstaclesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(490, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(112, 20);
			this->gameToolStripMenuItem->Text = L"Game Parameters";
			// 
			// levelObstaclesToolStripMenuItem
			// 
			this->levelObstaclesToolStripMenuItem->Name = L"levelObstaclesToolStripMenuItem";
			this->levelObstaclesToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->levelObstaclesToolStripMenuItem->Text = L"Level Obstacles";
			// 
			// filesToolStripMenuItem
			// 
			this->filesToolStripMenuItem->Name = L"filesToolStripMenuItem";
			this->filesToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->filesToolStripMenuItem->Text = L"File Manager";
			// 
			// fileManagerGroupBox
			// 
			this->fileManagerGroupBox->Location = System::Drawing::Point(13, 28);
			this->fileManagerGroupBox->Name = L"fileManagerGroupBox";
			this->fileManagerGroupBox->Size = System::Drawing::Size(465, 388);
			this->fileManagerGroupBox->TabIndex = 1;
			this->fileManagerGroupBox->TabStop = false;
			// 
			// PlatformEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 428);
			this->Controls->Add(this->fileManagerGroupBox);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"PlatformEditor";
			this->Text = L"PlatformEditor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
