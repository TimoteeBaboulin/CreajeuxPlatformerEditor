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
	private: System::Windows::Forms::MenuStrip^ tabListMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ fileTabMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gameTabMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ levelTabMenuItem;
	protected:

	protected:



	private: System::Windows::Forms::GroupBox^ fileManagerGroupBox;
	private: System::Windows::Forms::Button^ loadLevelButton;

	private: System::Windows::Forms::Button^ saveLevelButton;
	private: System::Windows::Forms::Label^ saveLevelStatusLabel;
	private: System::Windows::Forms::Label^ loadLevelStatusLabel;
	private: System::Windows::Forms::GroupBox^ gameParametersGroupBox;
	private: System::Windows::Forms::PictureBox^ playerSpritePixtureBox;
	private: System::Windows::Forms::GroupBox^ levelObstaclesGroupBox;
	private: System::Windows::Forms::PictureBox^ levelEditorPictureBox;
	private: System::Windows::Forms::GroupBox^ tileEditorGroupBox;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ objectPictureBox;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlatformEditor::typeid));
			this->tabListMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileTabMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameTabMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->levelTabMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileManagerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->saveLevelStatusLabel = (gcnew System::Windows::Forms::Label());
			this->loadLevelButton = (gcnew System::Windows::Forms::Button());
			this->saveLevelButton = (gcnew System::Windows::Forms::Button());
			this->loadLevelStatusLabel = (gcnew System::Windows::Forms::Label());
			this->gameParametersGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->playerSpritePixtureBox = (gcnew System::Windows::Forms::PictureBox());
			this->levelObstaclesGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->levelEditorPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->tileEditorGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->objectPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabListMenuStrip->SuspendLayout();
			this->fileManagerGroupBox->SuspendLayout();
			this->gameParametersGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerSpritePixtureBox))->BeginInit();
			this->levelObstaclesGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelEditorPictureBox))->BeginInit();
			this->tileEditorGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->objectPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// tabListMenuStrip
			// 
			this->tabListMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileTabMenuItem,
					this->gameTabMenuItem, this->levelTabMenuItem
			});
			this->tabListMenuStrip->Location = System::Drawing::Point(0, 0);
			this->tabListMenuStrip->Name = L"tabListMenuStrip";
			this->tabListMenuStrip->Size = System::Drawing::Size(490, 24);
			this->tabListMenuStrip->TabIndex = 0;
			this->tabListMenuStrip->Text = L"Tab List";
			// 
			// fileTabMenuItem
			// 
			this->fileTabMenuItem->Name = L"fileTabMenuItem";
			this->fileTabMenuItem->Size = System::Drawing::Size(87, 20);
			this->fileTabMenuItem->Text = L"File Manager";
			// 
			// gameTabMenuItem
			// 
			this->gameTabMenuItem->Name = L"gameTabMenuItem";
			this->gameTabMenuItem->Size = System::Drawing::Size(112, 20);
			this->gameTabMenuItem->Text = L"Game Parameters";
			// 
			// levelTabMenuItem
			// 
			this->levelTabMenuItem->Name = L"levelTabMenuItem";
			this->levelTabMenuItem->Size = System::Drawing::Size(100, 20);
			this->levelTabMenuItem->Text = L"Level Obstacles";
			// 
			// fileManagerGroupBox
			// 
			this->fileManagerGroupBox->Controls->Add(this->loadLevelStatusLabel);
			this->fileManagerGroupBox->Controls->Add(this->saveLevelStatusLabel);
			this->fileManagerGroupBox->Controls->Add(this->loadLevelButton);
			this->fileManagerGroupBox->Controls->Add(this->saveLevelButton);
			this->fileManagerGroupBox->Location = System::Drawing::Point(1300, 28);
			this->fileManagerGroupBox->Name = L"fileManagerGroupBox";
			this->fileManagerGroupBox->Size = System::Drawing::Size(465, 388);
			this->fileManagerGroupBox->TabIndex = 1;
			this->fileManagerGroupBox->TabStop = false;
			this->fileManagerGroupBox->Text = L"File Manager";
			// 
			// saveLevelStatusLabel
			// 
			this->saveLevelStatusLabel->AutoSize = true;
			this->saveLevelStatusLabel->Location = System::Drawing::Point(164, 52);
			this->saveLevelStatusLabel->Name = L"saveLevelStatusLabel";
			this->saveLevelStatusLabel->Size = System::Drawing::Size(17, 13);
			this->saveLevelStatusLabel->TabIndex = 2;
			this->saveLevelStatusLabel->Text = L"nil";
			// 
			// loadLevelButton
			// 
			this->loadLevelButton->Location = System::Drawing::Point(7, 72);
			this->loadLevelButton->Name = L"loadLevelButton";
			this->loadLevelButton->Size = System::Drawing::Size(151, 46);
			this->loadLevelButton->TabIndex = 1;
			this->loadLevelButton->Text = L"Load Level";
			this->loadLevelButton->UseVisualStyleBackColor = true;
			// 
			// saveLevelButton
			// 
			this->saveLevelButton->Location = System::Drawing::Point(7, 20);
			this->saveLevelButton->Name = L"saveLevelButton";
			this->saveLevelButton->Size = System::Drawing::Size(150, 46);
			this->saveLevelButton->TabIndex = 0;
			this->saveLevelButton->Text = L"Save Level";
			this->saveLevelButton->UseVisualStyleBackColor = true;
			// 
			// loadLevelStatusLabel
			// 
			this->loadLevelStatusLabel->AutoSize = true;
			this->loadLevelStatusLabel->Location = System::Drawing::Point(165, 104);
			this->loadLevelStatusLabel->Name = L"loadLevelStatusLabel";
			this->loadLevelStatusLabel->Size = System::Drawing::Size(17, 13);
			this->loadLevelStatusLabel->TabIndex = 3;
			this->loadLevelStatusLabel->Text = L"nil";
			// 
			// gameParametersGroupBox
			// 
			this->gameParametersGroupBox->Controls->Add(this->playerSpritePixtureBox);
			this->gameParametersGroupBox->Location = System::Drawing::Point(1300, 28);
			this->gameParametersGroupBox->Name = L"gameParametersGroupBox";
			this->gameParametersGroupBox->Size = System::Drawing::Size(465, 388);
			this->gameParametersGroupBox->TabIndex = 2;
			this->gameParametersGroupBox->TabStop = false;
			this->gameParametersGroupBox->Text = L"Game Parameters";
			// 
			// playerSpritePixtureBox
			// 
			this->playerSpritePixtureBox->Location = System::Drawing::Point(259, 19);
			this->playerSpritePixtureBox->Name = L"playerSpritePixtureBox";
			this->playerSpritePixtureBox->Size = System::Drawing::Size(200, 150);
			this->playerSpritePixtureBox->TabIndex = 0;
			this->playerSpritePixtureBox->TabStop = false;
			// 
			// levelObstaclesGroupBox
			// 
			this->levelObstaclesGroupBox->Controls->Add(this->tileEditorGroupBox);
			this->levelObstaclesGroupBox->Controls->Add(this->levelEditorPictureBox);
			this->levelObstaclesGroupBox->Location = System::Drawing::Point(13, 28);
			this->levelObstaclesGroupBox->Name = L"levelObstaclesGroupBox";
			this->levelObstaclesGroupBox->Size = System::Drawing::Size(465, 388);
			this->levelObstaclesGroupBox->TabIndex = 3;
			this->levelObstaclesGroupBox->TabStop = false;
			this->levelObstaclesGroupBox->Text = L"Level Obstacles";
			// 
			// levelEditorPictureBox
			// 
			this->levelEditorPictureBox->Location = System::Drawing::Point(259, 19);
			this->levelEditorPictureBox->Name = L"levelEditorPictureBox";
			this->levelEditorPictureBox->Size = System::Drawing::Size(200, 150);
			this->levelEditorPictureBox->TabIndex = 0;
			this->levelEditorPictureBox->TabStop = false;
			// 
			// tileEditorGroupBox
			// 
			this->tileEditorGroupBox->Controls->Add(this->panel1);
			this->tileEditorGroupBox->Controls->Add(this->objectPictureBox);
			this->tileEditorGroupBox->Location = System::Drawing::Point(7, 175);
			this->tileEditorGroupBox->Name = L"tileEditorGroupBox";
			this->tileEditorGroupBox->Size = System::Drawing::Size(452, 207);
			this->tileEditorGroupBox->TabIndex = 1;
			this->tileEditorGroupBox->TabStop = false;
			this->tileEditorGroupBox->Text = L"Tile Editor";
			// 
			// objectPictureBox
			// 
			this->objectPictureBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"objectPictureBox.InitialImage")));
			this->objectPictureBox->Location = System::Drawing::Point(296, 19);
			this->objectPictureBox->Name = L"objectPictureBox";
			this->objectPictureBox->Size = System::Drawing::Size(150, 182);
			this->objectPictureBox->TabIndex = 0;
			this->objectPictureBox->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(7, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 182);
			this->panel1->TabIndex = 1;
			// 
			// PlatformEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 428);
			this->Controls->Add(this->levelObstaclesGroupBox);
			this->Controls->Add(this->gameParametersGroupBox);
			this->Controls->Add(this->fileManagerGroupBox);
			this->Controls->Add(this->tabListMenuStrip);
			this->Name = L"PlatformEditor";
			this->Text = L"PlatformEditor";
			this->tabListMenuStrip->ResumeLayout(false);
			this->tabListMenuStrip->PerformLayout();
			this->fileManagerGroupBox->ResumeLayout(false);
			this->fileManagerGroupBox->PerformLayout();
			this->gameParametersGroupBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerSpritePixtureBox))->EndInit();
			this->levelObstaclesGroupBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelEditorPictureBox))->EndInit();
			this->tileEditorGroupBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->objectPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
