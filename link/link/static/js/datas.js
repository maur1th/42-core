jQuery(function ($) {
  var clientid = $('#chart1').data('clientid');
  var nb_accounts = 0;
  var length = 0;
  var today = moment().format('DD/MM/YYYY');

  var data1 = [1300000, 1300000 + 44787.9476113673, 1300000 + 44787.9476113673 + 80916.8145389641, 1300000 + 44787.9476113673 + 80916.8145389641 + 98769.5744280268, 1300000 + 44787.9476113673 + 80916.8145389641 + 98769.5744280268 + -94378.3334875151];
  var data2 = [3, 9, 12, 14, 22, 32, 45, 12, 67, 45, 55, 7];
  var data3 = [23, 19, 11, 134, 242, 352, 435, 22, 637, 445, 555, 57];
  var data4 = [10, 20, 30, 40, 50];
  var data5 = [1];

  var data6 = [3, 9, 12, 14, 18, 32];
  var data7 = [3, 7, 10, 13, 16, 37];
  var data8 = [3, 5, 11, 10, 43, 16];
  var data9 = [3+3+3, 9+7+5, 10+11+12, 14+13+10, 18+16+43, 32+37+16];
  var data10 = [3, 3, 9, 14, 11, 12];
  var data11 = [3, 6, 17, 17, 20, 22];
  var data12 = [3, 1, 13, 20, 45, 20];
  var data13 = [3+3+3, 10, 9+17+13, 14+17+20, 11+20+45, 12+22+20];

/*
{
       seriesType: 'area',
       data: data7,
       collectionAlias: 'Compte 1',
     }, {
       seriesType: 'area',
       data: data8,
       collectionAlias: 'Compte 2',
     }, {
       seriesType: 'area',
       data: data6,
       collectionAlias: 'Compte 3',
     }, {
       seriesType: 'line',
       data: data11,
       collectionAlias: 'Benchmark Compte 1',
       color: 'blue'
     }, {
       seriesType: 'line',
       data: data12,
       collectionAlias: 'Benchmark Compte 2',
       color: 'orange'
     }, {
       seriesType: 'line',
       data: data10,
       collectionAlias: 'Benchmark Compte 3',
       color: 'red'
     }
*/


  function drawChart1(dates, series) {
    $('#chart1').shieldChart({
      exportOptions: {
        image: false,
        print: false
      },
      primaryHeader: {
        text: 'Variation annuelle des comptes',
        align: 'center'
      },
      axisX: {
        categoricalValues: dates
      },
      dataSeries: series
    });
  };

  function drawChart2(dates, series) {
    $('#chart7').shieldChart({
      exportOptions: {
        image: false,
        print: false
      },
      primaryHeader: {
        text: 'Variation trimestrielle des comptes',
        align: 'center'
      },
      seriesSettings: {
          area: {
              stackMode: "normal"
          }
      },
      dataSeries: series
    });
  };

  function drawChart3(series) {
    $('#chart3').shieldChart({
      exportOptions: {
        image: false,
        print: false
      },
      primaryHeader: {
        text: 'Part des produits dans le portefeuille',
        align: 'center'
      },
      dataSeries: series
    });
  };

  $.get('/api/accounts/?client=' + clientid, function (accounts) {
    var j = 0;
    var dates_1 = [];
    var series_1 = [];
    var dataSeries_1 = [];
    var dates_2 = [];
    var series_2 = [];
    var dataSeries_2 = [];
    var dates_3 = [];
    var series_3 = [];
    var dataSeries_3 = [];
    accounts.results.forEach(function (account)
    {
      $.get('/api/analytics/?account=' + account.id, function (res)
      {
        var serie = [];
        res.results.forEach(function (analytics)
        {
          if (analytics.period !== 'Global')
          {
            serie.push(parseInt(analytics.account_PL));
            dates_1.push(analytics.period);
          }
        });
        series_1.push(serie);
        if (series_1.length === accounts.count)
        {
          series_1.forEach(function (serie)
          {
            console.log(account.account_type);
            dataSeries_1.push({
              seriesType: 'line',
              data: serie,
              collectionAlias: account.account_type
            });
          });
        }
      }).done(function () {
        drawChart1(dates_1, dataSeries_1);
      });

      $.get('/api/composition/?account=' + account.id +'&min_date=2016-01-01', function (res)
      {
        var serie = [];
        res.results.forEach(function (composition, i)
        {
          if (i < 60)
          {
            serie.push(parseInt(composition.amount));
            dates_2.push(composition.date.toString());
          }
          i++;
        });
        series_2.push(serie);
        if (series_2.length === accounts.count)
        {
          series_2.forEach(function (serie)
          {
            dataSeries_2.push({
              seriesType: 'area',
              data: serie,
              collectionAlias: account.account_type
            });
          });
        }
      }).done(function () {
        drawChart2(dates_2, dataSeries_2);
      });

      $.get('/api/composition/?account=' + account.id, function (res)
      {
        var serie = [];
        var i = 0;
        res.results.forEach(function (composition, i)
        {
          if (i === 0)
          {
            serie.push(parseInt(composition.product));
          }
          i++;
        });
        // console.log(serie);

        if (j === accounts.count - 1)
        {
          series_3.push(serie);
          console.log(series_3);
        }
        j++;

        if (series_3.length === accounts.count)
        {
          series_3.forEach(function (serie)
          {
            dataSeries_3.push({
              seriesType: 'donut',
              data: serie,
            });
          });
        }
      }).done(function () {
        drawChart3(dataSeries_3);
      });

    });
  });

  $(function () {
    $('.links a').shieldTooltip();
    $('#chart5').shieldChart({
      exportOptions: {
        image: false,
        print: false
      },
      primaryHeader: {
        text: 'Assurance Vie',
        align: 'center'
      },
      axisY: {
        title: {
          text: 'Break-Down for selected quarter'
        },
      },
      axisX: {
        categoricalValues: ['1', '2', '3', '4', today]
      },
      dataSeries: [{
        seriesType: 'line',
        data: data1,
        collectionAlias: 'P&L'
        // color: 'red'
      }]
    });
    // $('#chart4').shieldChart({
    //  exportOptions: {
    //    image: false,
    //    print: false
    //  },
    //  dataSeries: [{
    //    seriesType: 'line',
    //    data: data2
    //  }, {
    //    seriesType: 'line',
    //    data: data3
    //  }]
    // });

    // $('#chart3').shieldChart({
    //   exportOptions: {
    //     image: false,
    //     print: false
    //   },
    //   primaryHeader: {
    //     text: 'Part des produits dans le portefeuille',
    //     align: 'center'
    //   },
    //   dataSeries: [{
    //     seriesType: 'donut',
    //     data: data4
    //   }]
    // });

    // $('#chart5').shieldChart({
    //   exportOptions: {
    //     image: false,
    //     print: false
    //   },
    //   primaryHeader: {
    //     text: 'Variation journalière',
    //     align: 'center'
    //   },
    //   dataSeries: [{
    //     seriesType: 'line',
    //     data: data5,
    //     color: 'red'
    //   }],
    // });

    $('#chart6').shieldChart({
      exportOptions: {
        image: false,
        print: false
      },
      dataSeries: [{
        seriesType: 'donut',
        data: data5
      }]
    });
  });
});
